# 真·插件----一个使用poco动态库的例子

学习百度apollo中，on ubuntu16.04，改动自 https://github.com/chenhuidong/MyGit/tree/master/MyCpp/MyTest/Poco

## 安装poco

``` on ubuntu shell
git clone https://github.com/pocoproject/poco
cd poco
mkdir cmake-build
cd cmake-build
cmake ..
cmake --build . --config Release
```

## 编译本项目

``` on ubuntu shell
cd current directory
mkdir build
cd build
cmake ..
make
```

## 运行

```
./main
```

命令行会显示：

```
PluginLibrary initializing
lib path: /home/shiqiang/apollo/with_apollo/test_poco/build/libPluginLibrary.so
PluginA
PluginB
run PluginA
run PluginB
PluginLibrary uninitializing
```

Enjoy it！！！