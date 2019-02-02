## C++简介

C++ 是一种静态类型的、编译式的、通用的、大小写敏感的、不规则的编程语言，支持过程化编程、面向对象编程和泛型编程。

C++ 被认为是一种中级语言，它综合了高级语言和低级语言的特点。

C++ 是由 Bjarne Stroustrup 于 1979 年在新泽西州美利山贝尔实验室开始设计开发的。C++ 进一步扩充和完善了 C 语言，最初命名为带类的C，后来在 1983 年更名为 C++。

C++ 是 C 的一个超集，事实上，任何合法的 C 程序都是合法的 C++ 程序。

    注意：使用静态类型的编程语言是在编译时执行类型检查，而不是在运行时执行类型检查。

## 面向对象程序设计

C++ 完全支持面向对象的程序设计，包括面向对象开发的四大特性：

* 封装
* 数据隐藏
* 继承
* 多态

## 标准库

标准的 C++ 由三个重要部分组成：

* 核心语言，提供了所有构件块，包括变量、数据类型和常量，等等。
* C++ 标准库，提供了大量的函数，用于操作文件、字符串等。
* 标准模板库（STL），提供了大量的方法，用于操作数据结构等。

## ANSI 标准

ANSI 标准是为了确保 C++ 的便携性 —— 您所编写的代码在 Mac、UNIX、Windows、Alpha 计算机上都能通过编译。

由于 ANSI 标准已稳定使用了很长的时间，所有主要的 C++ 编译器的制造商都支持 ANSI 标准。

## 学习 C++

学习 C++，关键是要理解概念，而不应过于深究语言的技术细节。

学习程序设计语言的目的是为了成为一个更好的程序员，也就是说，是为了能更有效率地设计和实现新系统，以及维护旧系统。

C++ 支持多种编程风格。您可以使用 Fortran、C、Smalltalk 等任意一种语言的编程风格来编写代码。每种风格都能有效地保证运行时间效率和空间效率。

## C++ 的使用

基本上每个应用程序领域的程序员都有使用 C++。

* C++ 通常用于编写设备驱动程序和其他要求实时性的直接操作硬件的软件。
* C++ 广泛用于教学和研究。
* 任何一个使用苹果电脑或 Windows PC 机的用户都在间接地使用 C++，因为这些系统的主要用户接口是使用 C++ 编写的。

## C++ 环境设置

## 本地环境设置

如果您想要设置 C++ 语言环境，您需要确保电脑上有以下两款可用的软件:

* 文本编辑器
* C++ 编译器

## 文本编辑器

这将用于输入您的程序。文本编辑器包括 Windows Notepad、OS Edit command、Brief、Epsilon、EMACS 和 vim/vi。

文本编辑器的名称和版本在不同的操作系统上可能会有所不同。例如，Notepad 通常用于 Windows 操作系统上，vim/vi 可用于 Windows 和 Linux/UNIX 操作系统上。

通过编辑器创建的文件通常称为源文件，源文件包含程序源代码。C++ 程序的源文件通常使用扩展名 .cpp、.cp 或 .c。

在开始编程之前，请确保您有一个文本编辑器，且有足够的经验来编写一个计算机程序，然后把它保存在一个文件中，编译并执行它。

## C++ 编译器

写在源文件中的源代码是人类可读的源。它需要"编译"，转为机器语言，这样 CPU 可以按给定指令执行程序。

C++ 编译器用于把源代码编译成最终的可执行程序。

大多数的 C++ 编译器并不在乎源文件的扩展名，但是如果您未指定扩展名，则默认使用 .cpp。

最常用的免费可用的编译器是 GNU 的 C/C++ 编译器，如果您使用的是 HP 或 Solaris，则可以使用各自操作系统上的编译器。

以下部分将指导您如何在不同的操作系统上安装 GNU 的 C/C++ 编译器。这里同时提到 C/C++，主要是因为 GNU 的 gcc 编译器适合于 C 和 C++ 编程语言。

## 安装 GNU 的 C/C++ 编译器

## UNIX/Linux 上的安装

如果您使用的是 Linux 或 UNIX，请在命令行使用下面的命令来检查您的系统上是否安装了 GCC：

    $ g++ -v

如果您的计算机上已经安装了 GNU 编译器，则会显示如下消息：

```text
Using built-in specs.
Target: i386-redhat-linux
Configured with: ../configure --prefix=/usr .......
Thread model: posix
gcc version 4.1.2 20080704 (Red Hat 4.1.2-46)
```

如果未安装 GCC，那么请按照 http://gcc.gnu.org/install/ 上的详细说明安装 GCC。

## Mac OS X 上的安装

如果您使用的是 Mac OS X，最快捷的获取 GCC 的方法是从苹果的网站上下载 Xcode 开发环境，并按照安装说明进行安装。一旦安装上 Xcode，您就能使用 GNU 编译器。

Xcode 目前可从 developer.apple.com/technologies/tools/ 上下载。

## Windows 上的安装

为了在 Windows 上安装 GCC，您需要安装 MinGW。为了安装 MinGW，请访问 MinGW 的主页 www.mingw.org，进入 MinGW 下载页面，下载最新版本的 MinGW 安装程序，命名格式为 MinGW-\<version>.exe。

当安装 MinWG 时，您至少要安装 gcc-core、gcc-g++、binutils 和 MinGW runtime，但是一般情况下都会安装更多其他的项。

添加您安装的 MinGW 的 bin 子目录到您的 PATH 环境变量中，这样您就可以在命令行中通过简单的名称来指定这些工具。

当完成安装时，您可以从 Windows 命令行上运行 gcc、g++、ar、ranlib、dlltool 和其他一些 GNU 工具。

## C++ 基本语法

C++ 程序可以定义为对象的集合，这些对象通过调用彼此的方法进行交互。现在让我们简要地看一下什么是类、对象，方法、即时变量。

* 对象 - 对象具有状态和行为。例如：一只狗的状态 - 颜色、名称、品种，行为 - 摇动、叫唤、吃。对象是类的实例。
* 类   - 类可以定义为描述对象行为/状态的模板/蓝图。
* 方法 - 从基本上说，一个方法表示一种行为。一个类可以包含多个方法。可以在方法中写入逻辑、操作数据以及执行所有的动作。
* 即时变量 - 每个对象都有其独特的即时变量。对象的状态是由这些即时变量的值创建的。

## C++ 程序结构

让我们看一段简单的代码，可以输出单词 Hello World。

```c++
#include <iostream>
using namespace std;

// main() 是程序开始执行的地方
int main()
{
    cout << "Hello World"; // 输出 Hello World
    return 0;
}
```

接下来我们讲解一下上面这段程序：

* C++ 语言定义了一些头文件，这些头文件包含了程序中必需的或有用的信息。上面这段程序中，包含了头文件 \<iostream>。
* 行 using namespace std; 告诉编译器使用 std 命名空间。命名空间是 C++ 中一个相对新的概念。
* 下一行 // main() 是程序开始执行的地方 是一个单行注释。单行注释以 // 开头，在行末结束。
* 下一行 int main() 是主函数，程序从这里开始执行。
* 下一行 cout << "Hello World"; 会在屏幕上显示消息 "Hello World"。
* 下一行 return 0; 终止 main( )函数，并向调用进程返回值 0。

## 编译 & 执行 C++ 程序

接下来让我们看看如何把源代码保存在一个文件中，以及如何编译并运行它。下面是简单的步骤：

* 打开一个文本编辑器，添加上述代码。
* 保存文件为 hello.cpp。
* 打开命令提示符，进入到保存文件所在的目录。
* 键入 'g++ hello.cpp '，输入回车，编译代码。如果代码中没有错误，命令提示符会跳到下一行，并生成 a.out 可执行文件。
* 现在，键入 ' a.out' 来运行程序。

您可以看到屏幕上显示 ' Hello World '。

```text
$ g++ hello.cpp
$ ./a.out
Hello World
```

请确保您的路径中已包含 g++ 编译器，并确保在包含源文件 hello.cpp 的目录中运行它。

您也可以使用 makefile 来编译 C/C++ 程序。

## C++ 中的分号 & 块

在 C++ 中，分号是语句结束符。也就是说，每个语句必须以分号结束。它表明一个逻辑实体的结束。

例如，下面是三个不同的语句：

```c++
x = y;
y = y+1;
add(x, y);
```

块是一组使用大括号括起来的按逻辑连接的语句。例如：

```c++
{
   cout << "Hello World"; // 输出 Hello World
   return 0;
}
```

C++ 不以行末作为结束符的标识，因此，您可以在一行上放置多个语句。例如：

```c++
x = y;
y = y+1;
add(x, y);
```

等同于

```c++
x = y; y = y+1; add(x, y);
```

## C++ 标识符

C++ 标识符是用来标识变量、函数、类、模块，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。

C++ 标识符内不允许出现标点字符，比如 @、$ 和 %。C++ 是**区分大小写的编程语言**。因此，在 C++ 中，Manpower 和 manpower 是两个不同的标识符。

下面列出几个有效的标识符：

```text
mohd       zara    abc   move_name  a_123
myname50   _temp   j     a23b9      retVal
```

## C++ 关键字

下表列出了 C++ 中的保留字。这些保留字不能作为常量名、变量名或其他标识符名称。

|||||
----|----|----|----
asm |else|new |this
auto|enum|operator|throw
bool|explicit|private|true
break|export|protected|try
case|extern|public|typedef
catch|false|register|typeid
char        | float      | reinterpret_cast| typename
class       | for        | return    | union
const       | friend     | short     | unsigned
const_cast  | goto       | signed    | using
continue    | if         | sizeof    | virtual
default     | inline     | static    | void
delete      | int        | static_cast|volatile
do          | long       | struct    | wchar_t
double      | mutable    | switch    | while
dynamic_cast| namespace  | template  |  

## 三字符组

三字符组就是用于表示另一个字符的三个字符序列，又称为三字符序列。三字符序列总是以两个问号开头。

三字符序列不太常见，但 C++ 标准允许把某些字符指定为三字符序列。以前为了表示键盘上没有的字符，这是必不可少的一种方法。

三字符序列可以出现在任何地方，包括字符串、字符序列、注释和预处理指令。

下面列出了最常用的三字符序列：

三字符组  | 替换
------|------
??= | #
??/ | \
??' | ^
??( | [
??) | ]
??! | **\|**
??< | {
??> | }
??- | ~

所有的编译器都不支持三字符组，为避免造成混乱，不建议使用三字符组。

## C++ 中的空格

只包含空格的行，被称为空白行，可能带有注释，C++ 编译器会完全忽略它。

在 C++ 中，空格用于描述空白符、制表符、换行符和注释。空格分隔语句的各个部分，让编译器能识别语句中的某个元素（比如 int）在哪里结束，下一个元素在哪里开始。因此，在下面的语句中：

```c++
int age;
```

在这里，int 和 age 之间必须至少有一个空格字符（通常是一个空白符），这样编译器才能够区分它们。另一方面，在下面的语句中：

```c++
fruit = apples + oranges;   // 获取水果的总数
```

fruit 和 =，或者 = 和 apples 之间的空格字符不是必需的，但是为了增强可读性，您可以根据需要适当增加一些空格。

## C++ 注释

程序的注释是解释性语句，您可以在 C++ 代码中包含注释，这将提高源代码的可读性。所有的编程语言都允许某种形式的注释。

C++ 支持单行注释和多行注释。注释中的所有字符会被 C++ 编译器忽略。

C++ 注释以 /* 开始，以 */ 终止。例如：

/* 这是注释 */

```c++
/* C++ 注释也可以
 * 跨行
 */
```

注释也能以 // 开始，直到行末为止。例如：

```c++
#include
using namespace std;

main()
{
   cout << "Hello World"; // 输出 Hello World
   return 0;
}
```

当上面的代码被编译时，编译器会忽略 // prints Hello World，最后会产生以下结果：

    Hello World

在 /* 和 */ 注释内部，// 字符没有特殊的含义。在 // 注释内，/* 和 */ 字符也没有特殊的含义。因此，您可以在一种注释内嵌套另一种注释。例如：

```c++
/* 用于输出 Hello World 的注释

    cout << "Hello World"; // 输出 Hello World
*/
```
