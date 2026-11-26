def ft_plant_age() -> None:
    status: int = int(input("Enter plant age in days: "))
    if (status <= 60):
        print("Plant needs more time to grow.")
    else:
        print("Plant is ready to harvest!")
