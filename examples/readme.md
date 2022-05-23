Using the library fom C++

```
$ g++ ex01.cpp -I $path_to_headers -L $path_to_library -lgraph
$ LD_LIBRARY_PATH=$path_to_library ./a.out
```

Using the library from C

```
$ gcc ex02.c -I $path_to_headers -L $path_to_library -lgraph
$ LD_LIBRARY_PATH=$path_to_library ./a.out
```

Using the library from Python

```
$ PYTHONPATH=$path_to_python_library LD_LIBRARY_PATH=$path_to_library python ex03.py
```
