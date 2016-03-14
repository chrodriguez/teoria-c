# Seminario de Lenguaje - Opción C Facultad de Informática de la UNLP

Este repositorio contiene los fuentes con los que se genera la teoría que se
dicta en la materia Seminario de Lenguajes, Opción C en la Facultad de
Informática de la UNLP.

## El proyecto

Las teorías se gestionan utilizando [reveal-js](http://lab.hakim.se/reveal-js),
cuyo manjeo se simplifica aún más con [reveal-ck](http://jedcn.github.io/reveal-ck/)

El repositorio contiene un slides para cada teoría:

* slides.md: presentación de la materia
* slides-clase-1.md: clase 1
* slides-clase-2.md: clase 2

## Instalando un ambiente de edición

Para poder editar y manipular este material se requiere:

* GIT
* Ruby: ver como instalar ruby utilizando 
  * [En windows](http://rubyinstaller.org/)
  * [En linux](https://github.com/rbenv/rbenv)
  * *Considerar que debe disponer ruby y la gema bundler en su ambiente*
* Una vez instalado git, ruby y la gema bundler, descargar este repo y correr
  `bundle install`

## Durante la edición de las teorías

Para focalizar en una teoría, se utiliza el siguiente comando:

```bash
bundle exec reveal-ck generate slides.md
```

O en el caso de una teoría diferente de la presentación de la materia:

```bash
bundle exec reveal-ck generate -f slides-clase-1.md
```

### Para visualizar las presentaciones

Directamente correr:

```bash
bundle exec reveal-ck serve
```

O en el caso de una teoría diferente a la presentación de la materia:

```bash
bundle exec reveal-ck serve -f slides-clase-1.md
```

## Publicando el material en Github Pages

TODO
