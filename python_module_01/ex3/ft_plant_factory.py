#!/usr/bin/env python3


class Plant:
    def __init__(self, name: str = "", height: float = 0.0, days: int = 0,
                 growth: float = 0.0) -> None:
        self.name = name
        self.height = height
        self.days = days
        self.growth = growth

    def grow(self) -> None:
        self.height = round(self.height + self.growth, 1)

    def show(self) -> None:
        print(f"Created: {self.name}: {self.height}cm, {self.days} days old")

    def age_plus_one(self) -> None:
        self.days += 1


def main() -> None:
    rose = Plant("Rose", 25.0, 30)
    oak = Plant("Oak", 200.0, 365)
    cactus = Plant("Cactus", 5.0, 90)
    sunflower = Plant("Sunflower", 80.0, 45)
    fern = Plant("Fern", 15.0, 120)

    print("=== Plant Factory Output ===")
    rose.show()
    oak.show()
    cactus.show()
    sunflower.show()
    fern.show()


if __name__ == "__main__":
    main()
