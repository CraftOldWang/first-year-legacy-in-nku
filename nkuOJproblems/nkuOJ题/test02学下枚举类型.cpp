//
//
//#include<iostream>
//
//
////ѧϰʹ��ö�ٱ���
////��ͨ��ö���൱���и��������������������õ�#define
////ö����Ļ���������ͬһ��������ͬ����ͬ����
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
//    //enum class �Ļ�,���enum���Ӱ�ȫ,������ռ������
//    //ö������cout�Ļ���ת�ɶ�Ӧ��int
//    //'ö�ٳ���������ʽת��Ϊint������int��������ʽת��Ϊö��ֵ'
//    enum sex sex1 = sex::red;
//    enum  color favorite_color;
//
//    /* �û�����������ѡ����ɫ */
//    printf("��������ϲ������ɫ: (1. red, 2. green, 3. blue): ");
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
//    /* ������ */
//    switch (favorite_color)
//    {
//    case color::red:
//        printf("��ϲ������ɫ�Ǻ�ɫ");
//        break;
//    case color::green:
//        printf("��ϲ������ɫ����ɫ");
//        break;
//    case color:: blue:
//        printf("��ϲ������ɫ����ɫ");
//        break;
//    default:
//        printf("��û��ѡ����ϲ������ɫ");
//    }
//
//    return 0;
//}