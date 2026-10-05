def ft_count_harvest_recursive():
    def count_days(current: int, total: int):
        if current <= total:
            print(f"Day {current}")
            count_days(current + 1, total)
    days = int(input("Days until harvest: "))
    count_days(1, days)
    print("Harvest time!")
