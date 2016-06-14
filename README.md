# GLMock
GLMock是一个模拟接口返回数据的工具

# 使用帮助
1.导入GLMock.framework 和 mock.plist文件<br>
2.在mock.plist文件中添加接口协议<br>
在plist文件中，key填写接口名，value填写接口协议（JSON格式）<br>
3.在需要模拟接口返回数据的类 #import <GLMock/GLMock.h><br>
4.[GLMock mockWithApi:@"接口名"];<br><br>

到这里基本上就大功搞成了