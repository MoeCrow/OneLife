# OneLife

[![Build Status](http://43.254.216.98:8891/job/OneHourOneLife/job/MoeLifeServer/badge/icon)](http://43.254.216.98:8891/job/OneHourOneLife/job/MoeLifeServer/)

OHOL MoeLife server
Add several useful commands, auto save death position and player will reborn on the last death position.

加入一些实用的指令，并且玩家会在上一次死亡位置重生。
transition改动:https://github.com/moeonelife/OneLifeData7

## 指令

查询坐标：.pos

设置地标 .setwarp <warp>

传送到地标: .warp <warp>

删除地标: .delwarp <warp>

设置家 .sethome

回家 .home

返回上一个地点 .back

随机传送 .tpr

查询钢余额 .bal

写支票 拿着白纸输入.chq <number>

银行使用说明：拿着钢点天启存钢，空手点击取出，支票点天启兑换。

创建商店 站在商店上面一格 .shop <type>(0:出售 1:使用 2:未实装) <price>

删除商店 站在商店上面一格 .delshop

查询当前邮箱 .email

查询当前格子物体id .id

查询下面一格id .ids

## OP指令
坐标传送 .tp <x> <y>
  
放置物体 .putp <x> <y> <id>
  
放置在当前位置 .put <id>
  
放置在下面一格 .puts <id>
  
在下面一格放置地板 .flr <id>
  
删除地标 .delwarp <warp>
  
删除商店 .delshop

## 配置
ban.ini 封禁列表(列入其中的玩家无法进行USE操作)

ops.ini op列表，允许其使用op指令
