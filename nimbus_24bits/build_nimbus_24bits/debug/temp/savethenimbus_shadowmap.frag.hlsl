void frag_main()
{
    float opacity = 0.999800026416778564453125f;
    if (opacity < 0.100000001490116119384765625f)
    {
        discard;
    }
}

void main()
{
    frag_main();
}
