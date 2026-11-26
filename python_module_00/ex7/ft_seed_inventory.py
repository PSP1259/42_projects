def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    if (seed_type == "tomato"):
        print(f"Tomato seeds: {quantity} {unit} avalaible")
    elif (seed_type == "carrot"):
        print(f"Carrot seeds: {quantity} {unit} total")
    elif (seed_type == "lettuce"):
        print(f"Lettuce seeds: covers {quantity} square meters")
    else:
        print("Unknown unit type")
