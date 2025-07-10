grammar CalcScript;

program: (statement ';')+ EOF;

statement
    : assignment
    | print
    | expr
    ;

assignment: ID '=' expr;
print     : 'print' expr;

expr
    : expr '^' expr     # Pow
    | '-' expr          # Neg
    | expr '*' expr     # Mul
    | expr '/' expr     # Div
    | expr '+' expr     # Add
    | expr '-' expr     # Sub
    | atom              # AtomExpr
    ;

atom
    : NUMBER
    | ID
    | '(' expr ')'
    | function
    ;

function: ('sin' | 'cos' | 'sqrt') '(' expr ')';

ID     : [a-zA-Z][a-zA-Z0-9]*;
NUMBER : [0-9]+ ('.' [0-9]+)?;
WS     : [ \t\r\n]+ -> skip;
