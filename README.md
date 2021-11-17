# docker-memory-demo
Demo for memory restriction on docker container

#  HOW TO PULL

```
docker pull ghcr.io/manabuishii/memory-allocate-demo:0.2.2
```

# HOW TO USE


# Allocate at once

```
docker run -ti manabumemory:0.2.1 /bin/bash ./allocate.sh 1  
Allocate 1073741824 bytes (= 1024MB) (== 1GB)
```

```console
$ docker run -ti manabumemory:0.2.1 /bin/bash ./allocate.sh 1
Allocate 11811160064 bytes (= 11264MB) (== 11GB)
```

# Allocate 1GB per N seconds

Allocate 1GB per 1 second.

```
docker run -ti manabumemory:0.2.1 /bin/bash ./allocate.sh 4 1
```

```console
$ docker run -ti manabumemory:0.2.1 /bin/bash ./allocate.sh 4 1
1
Allocate 1073741824 bytes (= 1024MB) (== 1GB)
2
Allocate 1073741824 bytes (= 1024MB) (== 1GB)
3
Allocate 1073741824 bytes (= 1024MB) (== 1GB)
4
Allocate 1073741824 bytes (= 1024MB) (== 1GB)
```