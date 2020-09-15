# Metallizing GraphBlas Template Library

The goal of this project is to prototype a persistent memory allocator for GBTL container.

Metall is a memory allocator for persistent memory.
More Info at : https://github.com/LLNL/metall

GraphBlas Template Library is a modern idiomatic C++ reference implementation of the GraphBLAS C API Specification and has examples of commonly used graph algorithms implemented with the GraphBLAS primitive operations.
More Info at: https://github.com/cmu-sei/gbtl



## Getting Started


### Requirements:

cd Metallizing_GBTL
spack load metall
spack load gcc@9.3.0


### To Compile GBTL with Metall:

    g++-9 -std=gnu++1z                                    # Requires gcc9
          -I./gbtl/src/graphblas/detail                   # Include header files from gbtl detail dir
          -I./gbtl/src                                    # Include header files from gbtl src dir
          -I./gbtl/src/graphblas/platforms/sequential     # Include header files from gbtl sequential-platform dir
          -I./metall/include/                             # Include header files from metall include dir
          -I/path/to/boost/include                        # Include header files from boost include dir [mostly optional]
          -L/usr/lib/gcc/lib64                            # Link with the gcc library directory [mostly optional]
          ./gbtl/src/demo/triangle_count_demo.cpp         # My cpp program
          -o                                              # Specify my build output file
          gbtl_tc.exe                                     # My executable file
          -lstdc++fs                                      # Required by metall to use the Filesystem library



          g++-9 -std=gnu++1z -I./gbtl/src/graphblas/detail -I./gbtl/src -I./gbtl/src/graphblas/platforms/sequential  -I./metall/include/  ./gbtl/src/demo/triangle_count_demo.cpp   -o  gbtl_tc.exe   -lstdc++fs   

### To Run:

    ./gbtl_tc.exe ./gbtl/src/demo/triangle_count_data_ca-HepTh.tsv


### To Compile just GBTL (Triangle Counting):

    g++-9 -std=gnu++1z
          -I./gbtl/src/graphblas/detail
          -I./gbtl/src
          -I./gbtl/src/graphblas/platforms/sequential
          gbtl/src/demo/triangle_count_demo.cpp
          -o
          gbtl_tc


### To Run just GBTL (Triangle Counting):

    ./gbtl_tc ./gbtl/src/demo/triangle_count_data_ca-HepTh.tsv



### To Compile Just Metall:

    g++ -std=c++17
        -I/path/to/boost/include
        -L/usr/lib/gcc/lib64
        -I./metall/include/
        ./metall/example/adjacency_list_graph.cpp
        -o
        adjacency_list_graph.exe  
        -lstdc++fs

### To Run Just Metall:

    ./adjacency_list_graph.exe
