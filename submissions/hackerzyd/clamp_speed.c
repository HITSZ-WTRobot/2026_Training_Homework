int clamp_speed(int target_speed)
{
    if (target_speed > 1000)
    {
        return 1000;
    }
    else if (target_speed < -1000)
    {
        return -1000;
    }

    return target_speed;
}