# Stack_t

## Overview
This project provides an implementation of a stack data structure based on an array. The stack supports basic operations such as initialization, push, pop, top, display, and size.

## Author
- **Abdulrahman Hassan Al-Sayed** (Adrehman)
  - LinkedIn: [Adrehman](https://www.linkedin.com/in/adrehmanhsn)
  - GitHub: [adrehmanhsn](https://github.com/adrehmanhsn)
  - Email: adrehmanhsn@hotmail.com

## Version
1.0.0

## Date
2024-01-25

## System Design
![System Design](../system_design.jpg)

## Details
This file provides the implementation of a stack data structure based on an array. It includes the following functions:
- `stack_init`: Initializes the stack.
- `stack_push`: Pushes a value onto the stack.
- `stack_pop`: Pops a value from the stack.
- `stack_top`: Retrieves the value at the top of the stack.
- `stack_display`: Displays the elements of the stack.
- `stack_size`: Returns the current size of the stack.

Additionally, it defines the following enum:
- `STACK_EMPTY`: Indicates an empty stack.
- `STACK_FULL`: Indicates a full stack.
- `STACK_NFULL`: Indicates a stack that is not full.

## License
This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program. If not, see [GNU License](https://www.gnu.org/license/).

## Installation
To use this stack implementation, include the "stack_ds.h" header file in your project. Adjust the `STACK_MAX_SIZE` macro to set the maximum size of the stack. Debug information can be enabled by defining `STACK_DEBUG`.

## Usage
1. Include the "stack_ds.h" header file in your source file.
2. Initialize the stack using `stack_init`.
3. Use `stack_push` to push values onto the stack.
4. Use `stack_pop` to pop values from the stack.
5. Use `stack_top` to retrieve the value at the top of the stack.
6. Use `stack_display` to display the elements of the stack.
7. Use `stack_size` to get the current size of the stack.

Feel free to explore the provided functions and customize the stack implementation according to your project's needs.
# Stack_t

## نظرة عامة
يوفر هذا المشروع تنفيذًا لهيكل بيانات الستاك باستخدام مصفوفة. يدعم الستاك العمليات الأساسية مثل التهيئة، والإدراج، والحذف، والقمة، وعرض العناصر، وحجم الستاك.

## المؤلف
- **عبدالرحمن حسن السيد** (Adrehman)
  - لينكدان: [Adrehman](https://www.linkedin.com/in/adrehmanhsn)
  - جيت هب: [adrehmanhsn](https://github.com/adrehmanhsn)
  - البريد الإلكتروني: adrehmanhsn@hotmail.com

## الإصدار
1.0.0

## التاريخ
2024-01-25

## تصميم النظام
![تصميم النظام](../system_design.jpg)

## التفاصيل
يقدم هذا الملف تنفيذًا لهيكل بيانات الستاك باستخدام مصفوفة. يتضمن العديد من الوظائف الأساسية مثل:
- `stack_init`: تهيئة الستاك.
- `stack_push`: إدراج قيمة في الستاك.
- `stack_pop`: حذف قيمة من الستاك.
- `stack_top`: الحصول على قيمة القمة في الستاك.
- `stack_display`: عرض عناصر الستاك.
- `stack_size`: الحصول على حجم الستاك الحالي.

بالإضافة إلى ذلك، يتم تعريف النوع التالي:
- `STACK_EMPTY`: يشير إلى ستاك فارغ.
- `STACK_FULL`: يشير إلى ستاك ممتلئ.
- `STACK_NFULL`: يشير إلى ستاك غير ممتلئ.

## الترخيص
هذا البرنامج هو برنامج حر: يمكنك إعادة توزيعه و/أو تعديله وفقًا لشروط رخصة جنو العمومية كما نشرتها مؤسسة البرمجيات الحرة، إما الإصدار 2 من الرخصة، أو (اختيارياً) أي إصدار لاحق.

يُوزع هذا البرنامج على أمل أن يكون مفيداً، ولكن دون أي ضمان؛ حتى دون الضمان الضمني للتسويق أو اللياقة لغرض معين. انظر الرخصة العمومية العامة للمزيد من التفاصيل.

يجب أن تكون قد استلمت نسخة من الرخصة العامة العمومية مع هذا البرنامج. إذا لم يكن الأمر كذلك، انظر [GNU License](https://www.gnu.org/license/).

## التثبيت
لاستخدام هذا التنفيذ للستاك، يُرجى تضمين ملف الهيدر "stack_ds.h" في مشروعك. قم بضبط ماكرو `STACK_MAX_SIZE` لتحديد الحجم الأقصى للستاك. يمكن تمكين معلومات التصحيح عن طريق تعريف `STACK_DEBUG`.

## الاستخدام
1. قم بتضمين ملف الهيدر "stack_ds.h" في ملف المصدر الخاص بك.
2. قم بتهيئة الستاك باستخدام `stack_init`.
3. استخدم `stack_push` لإدراج القيم في الستاك.
4. استخدم `stack_pop` لحذف القيم من الستاك.
5. استخدم `stack_top` للحصول على قيمة القمة في الستاك.
6. استخدم `stack_display` لعرض عناصر الستاك.
7. استخدم `stack_size` للحصول على الحجم الحالي للستاك.

لا تتردد في استكشاف الوظائف المقدمة وتخصيص تنفيذ الستاك وفقًا لاحتياجات مشروعك.
