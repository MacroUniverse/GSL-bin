## Windows 下直接使用 lib 和 dll
* 如果不想编译就直接把头文件， lib 和 dll 复制到工程里面即可
* 如果想自己编译， 见 Notes 中的笔记
* 文件夹中的 sln 项目是我手动生成的， 就只是在工程 property 中添加了头文件路径以及 linker 路径还有 lib 文件（dll 文件只要放在 exe 同一目录或者系统的 PATH 即可
* CMake 文件也是我自己写的， 头文件和 lib 文件都是直接使用这个文件夹中的（没有复制）。 但如果输出目录和输入目录不同， 需要把 dll 文件复制到 exe 相同的目录中。 说实话 CMake 比手动设置 VS project 好多了。
