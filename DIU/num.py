# Replace unsupported characters with ASCII equivalents and retry
pdf = FPDF()
pdf.set_auto_page_break(auto=True, margin=15)
pdf.add_page()
pdf.set_font("Arial", size=12)

# Title
pdf.set_font("Arial", style="B", size=16)
pdf.cell(0, 10, "Geometry Formulas", ln=True, align="C")
pdf.ln(10)

# 2D Geometry Section
pdf.set_font("Arial", style="B", size=14)
pdf.cell(0, 10, "2D Geometry Formulas", ln=True)
pdf.ln(5)
pdf.set_font("Arial", size=12)
pdf.multi_cell(0, 10, """
Perimeter of a Square = 4(Side)
Perimeter of a Rectangle = 2(Length + Breadth)
Area of a Square = Side^2
Area of a Rectangle = Length × Breadth
Area of a Triangle = 1/2 × base × height
Area of a Trapezoid = 1/2 × (base1 + base2) × height
Area of a Circle = pi × r^2
Circumference of a Circle = 2pi × r
""")

# 3D Geometry Section
pdf.set_font("Arial", style="B", size=14)
pdf.cell(0, 10, "3D Geometry Formulas", ln=True)
pdf.ln(5)
pdf.set_font("Arial", size=12)
pdf.multi_cell(0, 10, """
Curved Surface Area of a Cylinder = 2pi × r × h
Total Surface Area of a Cylinder = 2pi × r(r + h)
Volume of a Cylinder = pi × r^2 × h
Curved Surface Area of a Cone = pi × r × l
Total Surface Area of a Cone = pi × r(r+l) = pi × r[r+√(h^2+r^2)]
Volume of a Cone = 1/3 × pi × r^2 × h
Surface Area of a Sphere = 4pi × r^2
Volume of a Sphere = 4/3 × pi × r^3

Where:
r = Radius
h = Height
l = Slant height
""")

# Geometry Formulas Table
pdf.set_font("Arial", style="B", size=14)
pdf.cell(0, 10, "Shapes and Their Formulas", ln=True)
pdf.ln(5)
pdf.set_font("Arial", size=12)
pdf.multi_cell(0, 10, """
1. Right Triangle:
   - Pythagoras Theorem: base^2 + height^2 = hypotenuse^2
   - Area = 1/2 × base × height
   - Perimeter = base + height + hypotenuse

2. Triangle:
   - Perimeter = a + b + c
   - Area = 1/2 × base × height

3. Rectangle:
   - Perimeter = 2(l + w)
   - Area = lw
   - Diagonal = √(l^2 + w^2)

4. Parallelogram:
   - Perimeter = 2(a + b)
   - Area = base × height

5. Trapezium:
   - Area = 1/2(a + b)h

6. Circle:
   - Circumference = 2pi × r
   - Area = pi × r^2

7. Square:
   - Perimeter = 4a
   - Area = a^2

8. Arc:
   - Arc Length = r × θ

9. Cube:
   - Surface Area = 6a^2
   - Volume = a^3

10. Cuboid:
    - Surface Area = 2(lb + bh + hl)
    - Volume = lbh

11. Cylinder:
    - Total Surface Area = 2pi × r × h + 2pi × r^2
    - Volume = pi × r^2 × h

12. Cone:
    - Total Surface Area = pi × r(r+l)

13. Sphere:
    - Surface Area = 4pi × r^2
    - Volume = 4/3pi × r^3
""")


