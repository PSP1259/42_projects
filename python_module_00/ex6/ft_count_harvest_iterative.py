def ft_count_harvest_iterative() -> None:
    num: int = int(input("Days until harvest: "))
    for num in range(1, num + 1):
        print(f"Day {num}")
    print("Harvest time!")
