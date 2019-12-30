# OneLife

[![Build Status](http://43.254.216.98:8891/job/OneHourOneLife/job/MoeLifeServer/badge/icon)](http://43.254.216.98:8891/job/OneHourOneLife/job/MoeLifeServer/)

OHOL MoeLife server
Add several useful commands, auto save death position and player will reborn on the last death position.

加入一些实用的指令，并且玩家会在上一次死亡位置重生。
transition改动:https://github.com/moeonelife/OneLifeData7

## Commands 指令

Get my position 查询坐标：.pos

Set warp 设置地标 .setwarp <warp>

Teleport to warp传送到地标: .warp <warp>

Delete warp 删除地标: .delwarp <warp>

Set my home 设置家 .sethome

Go back home 回家 .home

Get last place call teleport返回上一个地点 .back

Teleport randomly 随机传送 .tpr

Get my steel balance 查询钢余额 .bal

Make cheque 写支票 拿着白纸输入.chq <number>

Bank instruction: Holding steel click The Apocalypse to save, click The Apocalypse with empty item to withdraw, click with cheque to use cheque.

银行使用说明：拿着钢点天启存钢，空手点击取出，支票点天启兑换。

Create shop: standing one block above shop say .shop <type>(0:sell 1:use) <price>
  
创建商店 站在商店上面一格 .shop <type>(0:出售 1:使用 2:未实装) <price>

Delete shop: standing one block above shop say .delshop

删除商店 站在商店上面一格 .delshop

Get my email 查询当前邮箱 .email

Get object id in current tile 查询当前格子物体id .id

Get obj id one tile below you 查询下面一格id .ids

## Operator Commands OP指令
Teleport to coordinate 坐标传送 .tp <x> <y>
  
Place object to coordinate 放置物体 .putp <x> <y> <id>
  
Place obj here 放置在当前位置 .put <id>
  
Place obj south 放置在下面一格 .puts <id>
  
Place floor south 在下面一格放置地板 .flr <id>
  
Force delete warp 删除地标 .delwarp <warp>
  
Force delete shop 删除商店 .delshop

## Settings 配置
Ban list(list email here,player listed cannot USE)  ban.ini 封禁列表(列入其中的玩家无法进行USE操作)

Operator list(email) ops.ini op列表，允许其使用op指令
