FROM ubuntu:22.04

RUN apt update && apt install -y clang llvm

COPY output.ll /app/output.ll
WORKDIR /app

CMD ["clang", "output.ll", "-o", "calc"]
