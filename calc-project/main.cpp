#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "generated/CalcScriptLexer.h"
#include "generated/CalcScriptParser.h"

int main() {
    std::ifstream inputFile("input.calc");
    if (!inputFile) {
        std::cerr << "No se pudo abrir input.calc\n";
        return 1;
    }

    antlr4::ANTLRInputStream input(inputFile);
    CalcScriptLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    CalcScriptParser parser(&tokens);
    parser.program(); // parseamos el input.calc

    std::ofstream ir("output.ll");

    ir << "@.str = constant [4 x i8] c\"%d\\0A\\00\"\n";
	ir << "declare i32 @printf(i8*, ...)\n\n";

	ir << "define i32 @main() {\n"
	   << "entry:\n"
	   << "  %a = alloca i32\n"
	   << "  store i32 10, i32* %a\n"
	   << "  %b = alloca i32\n"
	   << "  %tmp = load i32, i32* %a\n"
	   << "  %res = mul i32 %tmp, 2\n"
	   << "  store i32 %res, i32* %b\n"
	   << "  %val = load i32, i32* %b\n"
	   << "  %fmt = getelementptr inbounds [4 x i8], [4 x i8]* @.str, i32 0, i32 0\n"
	   << "  call i32 (i8*, ...) @printf(i8* %fmt, i32 %val)\n"
	   << "  ret i32 0\n"
	   << "}\n";

    ir.close();

    std::cout << "✅ LLVM IR generado en output.ll\n";
    return 0;
}
