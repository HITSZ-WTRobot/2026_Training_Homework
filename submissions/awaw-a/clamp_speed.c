/* 作业 01：将目标速度限制在 [-1000, 1000]。 */
int clamp_speed(int target_speed)
{
    if (target_speed > 1000)
    {
        return 1000;
    }

    if (target_speed < -1000)
    {
        return -1000;
    }

    return target_speed;
}
