# Struktury Danych: Operacje z Uwzględnieniem Błędów

## Opis projektu

Program w języku C, który wykonuje podstawowe operacje matematyczne na liczbach z uwzględnieniem błędów pomiarowych. Definiuje strukturę danych, która przechowuje wartość liczby oraz jej błąd, a także implementuje funkcje do obliczeń matematycznych.

## Struktura danych

Program definiuje strukturę `liczba`, która przechowuje:

- `val`: Wartość liczby.
- `err`: Błąd pomiarowy tej liczby.

## Funkcje operacyjne

### 1. `suma(liczba a, liczba b)`

- **Opis**: Oblicza sumę dwóch liczb, zwracając nową liczbę z odpowiednim błędem.

### 2. `roznica(liczba a, liczba b)`

- **Opis**: Oblicza różnicę dwóch liczb, zwracając wynik z błędem.

### 3. `iloczyn(liczba a, liczba b)`

- **Opis**: Oblicza iloczyn dwóch liczb, uwzględniając błędy w obliczeniach.

### 4. `iloraz(liczba a, liczba b)`

- **Opis**: Oblicza iloraz dwóch liczb, również z uwzględnieniem błędów.

### 5. `zaokr(liczba a, int miejsca_po_przecinku)`

- **Opis**: Zaokrągla wartość liczby do zadanego miejsca po przecinku i oblicza błąd zaokrąglenia.

## Funkcja `main`

W funkcji `main` program:

1. Tworzy dwie liczby `a` i `b` z określonymi wartościami i błędami.
2. Wykonuje operacje (suma, różnica, iloczyn, iloraz) na tych liczbach, wyświetlając wyniki oraz błędy.
3. Dla każdego wyniku oblicza zaokrąglenie do dwóch miejsc po przecinku i ponownie oblicza błąd.

## Podsumowanie

Program ilustruje, jak wykonywać podstawowe operacje matematyczne na liczbach z błędami pomiarowymi, uwzględniając błędy w obliczeniach oraz zaokrąglenia.
