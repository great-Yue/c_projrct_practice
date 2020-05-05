我测试一下啊啊

## 随笔

### 1 . 指定提交后的某个文件还原到某个版本

比如我们回滚README.md文件到某个版本：

1. git log REASME.md 首先找到要回滚文件的历史版本的hash值
   1. ![1588649129220](https://github.com/great-Yue/c_projrct_practice/blob/master/img/查看版本历史.jpg)
2. git checkout ×××××××(hash值的前七位) README.md ,此时README.md文件便回到当前版本；
   1. ![1588651770704](https://github.com/great-Yue/c_projrct_practice/blob/master/img/选择版本.jpg)
3. git commit -m "添加备注以方便自己或是别人查看" ,还原后需要再次提交；
4. git push origin master;提交到远程仓库
   1. ![1588651957534](https://github.com/great-Yue/c_projrct_practice/blob/master/img/提交演示.jpg)
