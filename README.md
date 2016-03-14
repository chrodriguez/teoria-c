# Seminario de Lenguaje - Opción C Facultad de Informática de la UNLP

Este repositorio contiene los fuentes con los que se genera la teoría que se
dicta en la materia Seminario de Lenguajes, Opción C en la Facultad de
Informática de la UNLP.

## El proyecto

Las teorías se gestionan utilizando [reveal-js](http://lab.hakim.se/reveal-js),
cuyo manjeo se simplifica aún más con [reveal-ck](http://jedcn.github.io/reveal-ck/)

El repositorio contiene un archivo de slide en formato 
[Markdown](https://daringfireball.net/projects/markdown/) para cada teoría:

* `slides-00.md`: presentación de la materia
* `slides-01.md`: clase 1
* `slides-02.md`: clase 2
* ...

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
bundle exec reveal-ck generate -f slides-xx.md -d slides
```

### Para visualizar las presentaciones

Directamente correr:

```bash
bundle exec reveal-ck serve -f slides-xx.md -d slides
```

### Comando simple para visualizar

Correr directamente:

```bash
#./servir <NUMERO DE CLASE>
# por ejemplo:
./servir 01
```
Esto correrá los comandos anteriores

## Publicando el material en Github Pages

Simplemente correr:

```bash
./publicar
```
