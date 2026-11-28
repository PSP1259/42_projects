#!/usr/bin/env python3


class Plant:
    def __init__(self, name: str = "", height: float = 0.0,
                 age: int = 0) -> None:
        self.name = name
        self._height = height
        self._age = age

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return (self._age)

    def set_height(self, height: float) -> None:
        if height >= 0:
            self._height = height
            print(f"Height updated: {self._height}cm")
        else:
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")

    def set_age(self, age: int) -> None:
        if age >= 0:
            self._age = age
            print(f"Age updated: {self._age} days")
        else:
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")

    def show(self) -> None:
        print("=== Garden Security System ===")
        print(
            f"Plant created: {self.name}: {self._height}cm, "
            f"{self._age} days old"
            )


def main() -> None:
    rose = Plant("Rose", 15.0, 10)

    rose.show()

    rose.set_height(25)
    rose.set_age(30)

    rose.set_height(-1)
    rose.set_age(-100)

    print(
        f"Current state: {rose.name}: {rose.get_height():.1f}cm, "
        f"{rose.get_age()} days old"
        )


if __name__ == "__main__":
    main()
