To Compile GBTL:

 g++-9 -std=gnu++1z -I./src/graphblas/detail -I./src -I./src/graphblas/platforms/sequential src/demo/triangle_count_demo.cpp -o gbtl_tc 


To Run:
./gbtl_tc src/demo/triangle_count_data_ca-HepTh.tsv 



To Compile Metall:
kaushik2@p8umbc2:~/Metallizing_GBTL$ g++ -std=c++17 -I./metall/include/ ./metall/example/adjacency_list_graph.cpp -o adjacency_list_graph.exe  -lstdc++fs

kaushik2@p8umbc2:~/Metallizing_GBTL$ ./adjacency_list_graph.exe 
1 2
1 3

kaushik2@p8umbc2:~/Metallizing_GBTL$ pwd
/home/kaushik2/Metallizing_GBTL


