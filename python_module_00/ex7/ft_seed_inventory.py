def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    formated_strings = {
        "packets": f"{quantity} packets available",
        "grams": f"{quantity} grams total",
        "area": f"covers {quantity} square meters"
    }
    if unit not in formated_strings:
        print("Unknown unit type")
        return
    print(f"{seed_type.capitalize()} seeds: " + formated_strings[unit])
