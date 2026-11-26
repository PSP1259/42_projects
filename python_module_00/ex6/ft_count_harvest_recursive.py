def ft_count_harvest_recursive() -> None:

    def count_days(current_day: int, total_days: int) -> None:
        if (current_day > total_days):
            return
        print(f"Day {current_day}")
        count_days(current_day + 1, total_days)

    days: int = int(input("Days until harvest: "))
    count_days(1, days)
    print("Harvest time!")
