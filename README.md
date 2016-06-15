# GLMock
GLMock是一个模拟接口返回数据的工具

# 使用帮助
使用非常方便,下面开始介绍使用方法<br>
1.在github下载：https://github.com/DamonLei/GLMock<br>
2.导入GLMock.framework 和 mock.plist 文件<br>
3.在mock.plist文件中定义接口协议<br>
    配置数据和生成的数据：<br>
    key=testApi，<br>
    value=[{"icon":"aaaaa1111",===>随机的是字母+数字<br>
           "web":"http://www.bbb.com",===>随机生成URL<br>
           "title":"aaaaa",===>随机字母<br>
           "name":"大小姐",===>随机中文<br>
           "text":"1000",===>随机0-1000之间的数值<br>
           "age":18,===>随机0-18之间数值<br>
           "amount":88888.88,===>随机0.00-88888.88之间的数值<br>
           "phone":"13012348912",===>随机生成手机号码<br>
           "mail":"sdfj@sdf.com",===>随机生成邮箱地址<br>
           "date":"2016-06-14 02:12:42",===>随机日期2016-06-15 14:52:41<br>
           "date1":"20160614021242",===>随机日期2016-06-15 14:52:58<br>
           "date2":"16-06-1402:12:42",===>随机日期2016-06-15 14:52:58<br>
           "date3":"2015-12-12",===>随机日期2016-06-15（前后半个月之间）<br>
           "date4":"12:12:12",===>随机日期14:54:25 （24小时内随机）<br>
           "date5":"1465842907"===>随机数值（0-1465842907）<br>
           }]<br>
4.在需要使用的地方写如下代码：<br>
    // 模拟url接口数据<br>
    NSString *response = [GLMock mockWithApi:url];<br>
    // 检查返回的json格式是否正确<br>
    if ([GLMock isJsonString:response]) {<br>
        NSLog(@"\n======>url:%@\nresponse:\n%@",url,response);<br>
        // json数据转为字典/数组<br>
        id obj = [GLMock parsingJsonString:response];<br>
        NSLog(@"\n======>%@",obj)<br>
    }

到这里基本上就大功搞成了
