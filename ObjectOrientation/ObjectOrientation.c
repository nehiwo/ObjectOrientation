#include "CClass.h"

int main()
{
    //instance of class.
    CClass_t class_main = { 0 };
    Constractor(&class_main);
    vec vector_a = { 0, 3, 7, 89, -12 };
    vec vector_b = { 8, 9, -182, 89, 2 };
    vec vector_sum = { 0, 0, 0, 0, 0 };
    int dim = 0;
    getchar();
    //use class method.
    class_main.method_sum_vector(vector_a, vector_b, vector_sum);
    while (1) {
        printf("vector_a = { ");
        for (dim = 0; dim < VECTOR_DIMENTION; dim++) {
            printf("%d, ", vector_a[dim]);
        }
        printf("}\n");
        printf("vector_b = { ");
        for (dim = 0; dim < VECTOR_DIMENTION; dim++) {
            printf("%d, ", vector_b[dim]);
        }
        printf("}\n");
        printf("vector_a + vector_b = { ");
        for (dim = 0; dim < VECTOR_DIMENTION; dim++) {
            printf("%d, ", vector_sum[dim]);
        }
        printf("}\n");
        //confirm value of private member.
        printf("private member = %d\n", class_main.getter()/* use class getter */);
        //use class setter for private member.
        class_main.setter(10);
        //confirm value of private member.
        printf("private member = %d\n", class_main.getter());
        getchar();
        break;
    }
    class_main.destractor(&class_main);
    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
