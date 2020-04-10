### 13.1.2 构造函数：访问权限的考虑

有关派生类构造函数的要点如下：
- 首先创建基类对象
- 派生类构造函数应通过成员初始化列表将基类信息传递给基类构造函数
- 派生类构造函数应初始化派生类新增的数据成员

释放对象的顺序与创建对象的顺序相反，即首先执行派生类的析构函数，然后自动调用基类的析构函数。

### 13.1.3 使用派生类
要使用派生类，程冠希必须要能够访问基类声明。可以将每个类放在独立的头文件中，但由于这两个类是相关的，所以把其类声明放在一起更合适。
**程序清单13.4 tabtenn1.h**
```cpp
// tabtenn1.h -- a table tennis base class
#ifndef TABTENN1_H
#define TABTENN1_H
#include <string>
using std::string;
// simple base class
Class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer (const string & fn = "none",
                       const string & ln = "none", bool ht = false);

    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};

// simple derived class
class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer (unsigned int r = 0, const string & fn = "none",
                 const string & ln = "none", bool ht = false);
    RatedPlayer (unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() const { retrn rating; }
    void ResetRating (unsigned int r) {rating = r;}
};

#endif
```

以下代码是两个类的定义
**程序清单13.5 tabtenn1.cpp**
```cpp

```
