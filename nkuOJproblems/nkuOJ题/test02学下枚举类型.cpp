//
//
//#include<iostream>
//
//
////学习使用枚举变量
////普通的枚举相当于有个在它所在作用域起作用的#define
////枚举类的话可以允许同一作用域下同名不同含义
//
//
//
//int main()
//{
//
//    enum class color { red = 1, green, blue };
//
//    enum class sex
//    {
//        red =1,
//        green,
//        blue,
//    };
//
//    //enum class 的话,相比enum更加安全,更不会占用名字
//    //枚举类型cout的话会转成对应的int
//    //'枚举常数可以隐式转换为int，但是int不可以隐式转换为枚举值'
//    enum sex sex1 = sex::red;
//    enum  color favorite_color;
//
//    /* 用户输入数字来选择颜色 */
//    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
//    int i = 0;
//    std::cin >> i;
//    switch (i)
//    {
//    case 1:
//        favorite_color = color::red;
//        break;
//    case 2:
//        favorite_color = color::green;
//        break;
//    case 3:
//        favorite_color = color::blue;
//        break;
//    }
//
//    /* 输出结果 */
//    switch (favorite_color)
//    {
//    case color::red:
//        printf("你喜欢的颜色是红色");
//        break;
//    case color::green:
//        printf("你喜欢的颜色是绿色");
//        break;
//    case color:: blue:
//        printf("你喜欢的颜色是蓝色");
//        break;
//    default:
//        printf("你没有选择你喜欢的颜色");
//    }
//
//    return 0;
//}