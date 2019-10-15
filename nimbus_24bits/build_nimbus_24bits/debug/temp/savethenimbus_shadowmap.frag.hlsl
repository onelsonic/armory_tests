void frag_main()
{
    float opacity = 1.0f;
    if (opacity < 0.100000001490116119384765625f)
    {
        discard;
    }
}

void main()
{
    frag_main();
}
