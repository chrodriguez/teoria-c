# Seminario de Lenguaje - Opción C Facultad de Informática de la UNLP

Este repositorio contiene los fuentes con los que se genera la teoría que se
dicta en la materia Seminario de Lenguajes, Opción C en la Facultad de
Informática de la UNLP.

## El proyecto

Las teorías se gestionan utilizando [reveal-js](http://lab.hakim.se/reveal-js),
cuyo manjeo se simplifica aún más con [reveal-ck](http://jedcn.github.io/reveal-ck/)

El repositorio contiene un archivo de slide en formato 
[Markdown](https://daringfireball.net/projects/markdown/) para cada teoría:

* `slides.md`: presentación de la materia
* `slides-clase-1.md`: clase 1
* `slides-clase-2.md`: clase 2

## Instalando el ambiente de edición

Para poder editar y manipular este material se requiere:

* GIT
* Ruby: ver como instalar ruby utilizando 
  * En windows instalar ruby usando [Ruby installer](http://rubyinstaller.org/)
  * En linux se recomienda usar [rbenv](https://github.com/rbenv/rbenv) +
    [ruby-build](https://github.com/rbenv/ruby-build)
  * *Considerar que debe disponer ruby y la gema bundler en su ambiente*
    * [Bundler](http://bundler.io/) se instala usando `gem install bundler`
* Una vez instalado git, ruby y la gema bundler, descargar este repo y correr
  `bundle install` en el directorio del repositorio

## Durante la edición de las teorías

Para focalizar en una teoría, se utiliza el siguiente comando:

```bash
bundle exec reveal-ck generate slides.md
```

O en el caso de una teoría diferente de la presentación de la materia, por
ejemplo para la clase 1:

```bash
bundle exec reveal-ck generate -f slides-clase-1.md
```

### Para visualizar las presentaciones

Directamente correr:

```bash
bundle exec reveal-ck serve
```

O en el caso de una teoría diferente a la presentación de la materia, por
ejemplo para la clase 1:

```bash
bundle exec reveal-ck serve -f slides-clase-1.md
```

## Publicando el material en Github Pages

TODO
