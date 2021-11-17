FROM gcc:9.2
COPY ./main.c .
RUN gcc -o ./a.out main.c
COPY ./allocate.sh .
