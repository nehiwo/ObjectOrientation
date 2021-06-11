#include "CClass.h"

int main()
{
    //instance of class.
    CClass_t class_main = { 0 };
    Constractor(&class_main);
    int vecter_a[2] = { 0, 3 };
    int vecter_b[2] = { 8, 9 };
    int vecter_sum[2] = { 0, 0 };
    getchar();
    //use class method.
    class_main.method_sum_vecter(vecter_a, vecter_b, vecter_sum);
    while (1) {
        //confirm value of private member.
        printf("%d, %d\n", vecter_sum[0], vecter_sum[1]);
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
