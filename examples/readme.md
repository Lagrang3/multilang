```
$ g++ ex01.cpp -I $path_to_headers -L $path_to_library -lgraph
$ LD_LIBRARY_PATH=$path_to_library ./a.out
```

```
$ gcc ex02.c -I $path_to_headers -L $path_to_library -lgraph
$ LD_LIBRARY_PATH=$path_to_library ./a.out
```

```
$ LD_LIBRARY_PATH=$path_to_library python ex03.py
```
