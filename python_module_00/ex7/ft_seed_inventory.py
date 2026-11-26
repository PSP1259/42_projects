def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    if (unit == "packets"):
        print(f"Tomato seeds: {quantity} {unit} available")
    elif (unit == "grams"):
        print(f"Carrot seeds: {quantity} {unit} total")
    elif (unit == "area"):
        print(f"Lettuce seeds: covers {quantity} square meters")
    else:
        print("Unknown unit type")
