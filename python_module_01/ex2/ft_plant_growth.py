#!/usr/bin/env python3


class Plant:
    def __init__(self, name: str = "", height: float = 0.0, age: int = 0,
                 growth: float = 0.0) -> None:
        self.name = name
        self.height = height
        self.days_old = age
        self.growth = growth

    def grow(self) -> None:
        self.height = round(self.height + self.growth, 1)

    def age(self) -> None:
        self.days_old += 1

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.days_old} days old")


def main() -> None:
    rose = Plant("Rose", 25.0, 30, 0.8)

    start_height: float = rose.height

    print("=== Garden Plant Growth ===")
    rose.show()
    for day in range(1, 8):
        rose.grow()
        rose.age()
        print(f"=== Day {day} ===")
        rose.show()

    total_growth: float = round(rose.height - start_height, 1)

    print(f"Growth this week: {total_growth}cm")


if __name__ == "__main__":
    main()
