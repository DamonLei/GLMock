# GLMock
GLMock是一个模拟接口返回数据的工具

# 使用帮助
1.导入GLMock.framework 和 mock.plist文件
2.在mock.plist文件中添加接口协议
3.在需要模拟接口返回数据的类 #import <GLMock/GLMock.h>
4.[GLMock mockWithApi:@"接口名"];