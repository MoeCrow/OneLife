# OneLife

[![Build Status](http://43.254.216.98:8891/job/OneHourOneLife/job/MoeLifeServer/badge/icon)](http://43.254.216.98:8891/job/OneHourOneLife/job/MoeLifeServer/)

OHOL MoeLife server
Add several useful commands, auto save death position and player will reborn on the last death position.

加入一些实用的指令，并且玩家会在上一次死亡位置重生。
transition改动:https://github.com/moeonelife/OneLifeData7

## Commands 指令

Get my position 查询坐标：.pos

Set warp 设置地标 .setwarp &lt;warp>

Teleport to warp传送到地标: .warp &lt;warp>

Delete warp 删除地标: .delwarp &lt;warp>

Set my home 设置家 .sethome

Go back home 回家 .home

Get last place call teleport返回上一个地点 .back

Teleport randomly 随机传送 .tpr

Get my steel balance 查询钢余额 .bal

Make cheque 写支票 拿着白纸输入.chq &lt;number>

Bank instruction: Holding steel click The Apocalypse to save, click The Apocalypse with empty item to withdraw, click with cheque to use cheque.

银行使用说明：拿着钢点天启存钢，空手点击取出，支票点天启兑换。

Create shop: standing one block above shop say .shop &lt;type>(0:container sell 1:bare hand use 2:item use) &lt;price>
  
创建商店 站在商店上面一格 .shop &lt;type>(0:货架出售 1:空手使用 2:合成使用) &lt;price>

Delete shop: standing one block above shop say .delshop

删除商店 站在商店上面一格 .delshop

Get my email 查询当前邮箱 .email

Get object id in current tile 查询当前格子物体id .id

Get obj id one tile below you 查询下面一格id .ids

Change Person Randomly 随机更换角色 .rpo

Choose specified person 选择指定id的角色 .chs &lt;id>

## Operator Commands OP指令
Teleport to coordinate 坐标传送 .tp &lt;x> &lt;y>
  
Place object to coordinate 放置物体 .putp &lt;x> &lt;y> &lt;id>
  
Place obj here 放置在当前位置 .put &lt;id>
  
Place obj south 放置在下面一格 .puts &lt;id>

Place floor here 在当前位置放置地板 .flr &lt;id>

Place floor south 在下面一格放置地板 .flrs &lt;id>
  
Force delete warp 删除地标 .delwarp &lt;warp>
  
Force delete shop 删除商店 .delshop

Choose any object you want to be 变成任意物体 .chs &lt;id>

Give me money 给自己前 .gmm &lt;money>

Feed me 喂饱自己 .feed

Set my age 设置自己的年龄 .age &lt;age>

Broadcast messages 广播消息 .bc &lt;msg>

## Settings 配置
Ban list(list email here,player listed cannot USE)  ban.ini 封禁列表(列入其中的玩家无法进行USE操作)

Operator list(email) ops.ini op列表，允许其使用op指令
