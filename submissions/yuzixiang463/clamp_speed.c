int clamp_speed(int target_speed)
{
    /* TODO: 超出范围时返回对应边界，否则返回原值 */
    if (target_speed < -1000){
        return -1000;
    }else if (target_speed > 1000){
        return 1000;
    }else{
        return target_speed;
    }
}