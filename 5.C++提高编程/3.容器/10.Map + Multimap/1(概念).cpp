     ###10. Map 和 Multimap 容器

      1. 基本概念

**简介: 
      * map中所有元素都是pair
      * pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
      * 所有元素都会根据元素的键值"自动排序"


**本质: 
      * map/multimap属于**关联式容器**，底层结构是用二叉树实现

**优点: 
      * 可以根据key值快速找到value值

map和multimap区别: 
      - map不允许容器中有重复key值元素
      - multimap允许容器中有重复key值元素