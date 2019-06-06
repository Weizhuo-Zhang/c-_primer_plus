#include <iostream>
#include <array>
#include <string>
#include <vector>
#define ARRAY_SIZE 13

struct Fish{
    std::string types;
    int weight;
    float length;
};

int question_15(){
    Fish * fish_new = new Fish;
    fish_new->types = "sadin";
    fish_new->weight = 35;
    fish_new->length = 3.4;
    std::cout << fish_new->types << std::endl;
    std::cout << fish_new->weight << std::endl;
    std::cout << fish_new->length << std::endl;
}

int question_14(){
    std::cout << (int *) "Home of the jolly bytes";

}

int question_13(){
    int num;
    std::cout << "please input a num:" << std::endl;
    std::cin >>  num;
    //int * num_list = new int[num];
    std::vector<int> num_list(num);
    for (int i = 0; i < num; i++){
        num_list[i] = i;
    }
    for (int i = 0; i < num; i++){
        std::cout << num_list[i] << std::endl;
    }
    //delete []num_list;
    return 0;
}

int question_12(){
    float treacle[10];
    for (int i = 0; i < 10; i++){
        treacle[i] = i;
    }
    float * treacle_ptr = treacle;
    std::cout << *treacle_ptr << std::endl;
    std::cout << *(treacle_ptr+9) << std::endl;
    return 0;
}

int question_11(){
    double ted = 5.6;
    double * ted_ptr = &ted;
    std::cout << *ted_ptr << std::endl;

}

enum Response{
    No = 0,
    Yes = 1,
    Maybe = 2
};

int question_10(){
    Response response;
    response = No;
    std::cout << response << std::endl;
    response = Yes;
    std::cout << response << std::endl;
    response = Maybe;
    std::cout << response << std::endl;
    return 0;
}

int question_8_9(){
    Fish fish_new = {"sadin", 35, 3.4};
    std::cout << fish_new.types << std::endl;
    std::cout << fish_new.weight << std::endl;
    std::cout << fish_new.length << std::endl;
}


int question_7(){
    std::string str_temp = "Waldorf Salad";
    std::cout << str_temp << std::endl;
    return 0;
}

int question_6(){
    char str_temp[] = "cheeseburger";
    return 0;
}

int question_5(){
    float ideas[7] = {1.2, 2.2, 3.4, 5.2, 2.2, 2.3, 2.4};
    std::cout << ideas[1] << std::endl;
    return 0;
}

int question_4(){
    int temp_array[5] = {1,2,3,4,5};
    int even = temp_array[0];
    even = temp_array[4];
    return 0;
}

int question_3(){
    int temp_array[5] = {1,2,3,4,5};
    return 0;
}

int question_2(){
    /*
    std::array<char, ARRAY_SIZE> actor;
    for (int i = 0; i < ARRAY_SIZE; i++){
        actor[i] = 'a' + i;
    }
    */

    /*
    std::array<short, ARRAY_SIZE> betsie;
    for (int i = 0; i < ARRAY_SIZE; i++){
        betsie[i] = i;
    }
    */

    /*
    std::array<float, ARRAY_SIZE> chuck;
    for (int i = 0; i < ARRAY_SIZE; i++){
        chuck[i] = i * 4.2;
    }
    */

    std::array<long double, ARRAY_SIZE> dipsea;
    for (int i = 0; i < ARRAY_SIZE; i++){
        dipsea[i] = i * 242.341234;
    }

    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cout << "item[" << i << "]:" << dipsea[i] << std::endl;
    }

    return 0;
}

int question_1(){
    /* char array
    char actor[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        actor[i] = 'a' + i;
    }
    */

    /*
    short betsie[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++){
        betsie[i] = i;
    }
    */

    /*
    float chuck[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        chuck[i] = i * 1.1;
    }
    */

    long double dinsea[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        dinsea[i] = i * 11111111.111111;
    }

    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cout << "item[" << i << "]:" << dinsea[i] << std::endl;
    }
}
