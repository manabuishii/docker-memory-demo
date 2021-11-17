FROM gcc:9.2
RUN gcc -o ./a.out main.c
COPY ./allocate.sh .
CMD ["/bin/bash", "./allocate.sh"]
