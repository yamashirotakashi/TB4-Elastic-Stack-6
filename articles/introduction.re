﻿= はじめに

この本で取り扱っている各ツールのバージョンはElasticsearch、Logstash、Kibana共に「6.2」を使用しています。
Elastic Stackはバージョンアップがかなり早いツールです。バージョンによって挙動がかなり違うため、別バージョンを使用した場合と
コンフィグの書き方や操作方法が異なる場合があります。あらかじめご了承ください。

この本は次の章に別れています。

* Elastic Stackとは？
* GoではじめるElasticsearch
* Logstashを使ってみる
* Beatsを体験する
* Curatorを用いてIndexを操作する
* Kibanaを使ってデータを見える化してみる
* もっと便利にKibana6を使っていく

#@# LogstashとBeatsは内容見て更新

Elastic Stackとは？という方はまずはじめに@@<code>{Elastic Stackとは？}を読むと良いでしょう。
基本機能の解説・インストール方法一式を紹介しています。

ローカルで試してみる場合、zipファイルをダウンロードして環境構築するのが簡単です。


この本の情報はElastic社の公式ドキュメントを元に作成していますが、
本の情報を用いた開発・制作・運用に対して発生した全ての結果に対して責任を負うことはできません。
必ずご自身の環境でよく検証してから導入をお願いします。

Elastic社の公式URL
@<href>{https://www.elastic.co/guide/index.html}

== リポジトリとサポートについて
本書に掲載されたコードと正誤表などの情報は以下のURLで公開しています。

@<herf>{http://hoge.com/hoge}

== 表記関係について

本書に記載されている会社名、製品名などは、一般に各社の登録商標または商標、商品名です。会社名、製品名については、本文中では©、®、™マークなどは表示していません。

== 免責事項
本書に記載された内容は、情報の提供のみを目的としています。したがって、本書を用いた開発、製作、運用は、必ずご自身の責任と判断によって行ってください。これらの情報による開発、製作、運用の結果について、著者はいかなる責任も負いません。

== 底本について
本書籍は、技術系同人誌即売会「技術書典4」で頒布されたものを底本としています
