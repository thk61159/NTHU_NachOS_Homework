int main(void)
{
    int i; // 必須宣告在迴圈外面（早期 C 語言的規定）
    
    for(i = 5; i < 9; i++)
    {
        PrintInt(i);
    }
    
}