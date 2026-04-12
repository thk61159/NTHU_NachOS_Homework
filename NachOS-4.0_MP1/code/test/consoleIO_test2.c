int main(void)
{
    int i; // 必須宣告在迴圈外面（早期 C 語言的規定）
    
    for(i = 15; i < 19; i++)
    {
        PrintInt(i);
    }
    
}