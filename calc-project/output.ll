@.str = constant [4 x i8] c"%d\0A\00"
declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %a = alloca i32
  store i32 10, i32* %a
  %b = alloca i32
  %tmp = load i32, i32* %a
  %res = mul i32 %tmp, 2
  store i32 %res, i32* %b
  %val = load i32, i32* %b
  %fmt = getelementptr inbounds [4 x i8], [4 x i8]* @.str, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* %fmt, i32 %val)
  ret i32 0
}
