def ft_harvest_total() -> None:
    dayone: int = int(input("Day 1 harvest: "))
    daytwo: int = int(input("Day 2 harvest: "))
    daythree: int = int(input("Day 3 harvest: "))
    print(f"Total harvest: {dayone + daytwo + daythree}")
