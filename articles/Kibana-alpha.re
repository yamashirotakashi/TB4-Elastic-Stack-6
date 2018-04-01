= Kibana6の歩き方（という名の見所紹介）

Kibanaのバージョン5を使っていた人は、「またUIが変わったんですかい！」と思うかもしれません。もふちゃんもそうおもうにゃわん、です。

//image[kibana01-img02][Kibana（ver5.4）の画面]{
//}

=== みんなに配慮、優しい色合い

まず、大きく異なるのは全体の色味です。Kibanaのバージョン5（以降、Kibana5とします）はピンクや青など、明るい色をメインカラーとして使用していました。かわいいですね。
ところが、Kibana6からは青を基調とした昆布のような色合いになっています。Kibana5と比較すると地味ですね。

なぜそんな地味カラーになってしまったのでしょう？
これにはちゃんとわけがあります。

@<code>{色盲}という言葉をみなさんご存知でしょうか？ヒトの目は網膜の中に錐体細胞という細胞を持っています。
この細胞、赤・青・緑を感じることができる物質をそれぞれ持っています。赤・青・緑の濃さを見分けて、色をいろいろ見分けることができるんですね。

色盲ではない人は3色の色を感じることができるのですが、何らかの原因で赤・青・緑の錐体細胞のどれかがうまく働かなくなってしまう人もいます。
それが、色盲という状態です。
この色盲、何と男性では20名に1人、女性の500人に1人の割合で見受けられる、という研究もあります（黄色人種の場合）。
そして、赤系の色盲になる人が1番多いのです@<fn>{kibana01-fn01}。

//footnote[kibana01-fn01][参考：https://www.nig.ac.jp/color/gen/]

もう、もふちゃんが何を言いたいかわかりましたか？Elastic社はこの色盲の方に配慮してUIの色を変更したのです。
Elastic Stackを色々な人に使ってもらいたいという心意気ってやつですね。こんなもてなしの心をもってもふちゃんも生きていきたいものです。

=== 楽々ぽんのDashboardセットアップ

で、次に特徴的なのは@<code>{APM}や@<code>{Logging}の文字ですね。これは@<code>{Modules}というElastic Stackの新機能です。
micci184の章でも触れていますが、専用の@<code>{Beats Modules}を起動すると、Elasticsearchに自動で接続・KibanaのDashboardまで作成してもらえます。
あら便利！ヘル○オ並みの便利さです。

#@#章決まったら章題入れる
#@#Dashboardの説明は前にいれて、そこを書いておく

「あら、じゃあもうVisualizeするひつようないわーん」と思った方もいるかもしれません。ただこのModules、利用できるデータの種類に制限があります。
Elastic Stack6.2の時点で利用できるModulesは次の通りです。（KibanaのUIの中で確認できるぞい！）

* Apacheのログ
* Apacheのメトリクス
* APM
* Dockerのメトリクス
* Kubernetesのメトリクス
* MySQLのログ
* MySQLのメトリクス
* Netflow
* Nginxのログ
* Nginxのメトリクス
* Redisのログ
* Redisのメトリクス
* システムログ
* システムのメトリクス

@<code>{Netflow}はCisco社が開発したネットワークトラフィックの詳細情報を収集するための技術です。
@<code>{Redis}はNoSQLデータベースの1種です。

となると、このラインナップを見る限りWeb系をメインターゲットとして置いてるように見えますね。
やはりWebサービスは性能命ですから、性能やサービス監視は簡単に構築したいものです、って需要をうまくくんでますなあって気持ちになります。

=== グラフの種類も増えました

Visualizeを利用すると、自分でグラフを作成できるというのは前の章でお伝えした通りです。
このVisualize、デフォルトで利用できるグラフが増えました。

//image[kibana01-img03][Kibana6.2のVisualize]{
//}

ちなみにKibana5.4から増えたグラフは次の通りです。なんで5.4からかだって？もふちゃんが知ってるの、それが最後なの！しょうがないでしょ同人誌書くときしか使わないんだから！（いかり）

* Goal
* Coordinate Map
* Region Map
* Controls
* Vega

あらー随分とデフォルトで利用できるグラフ種別が増えましたね。すごいですね。

==== Goal
==== Coordinate Map/Region Map
==== Controls
==== Vega

=== 何気に嬉しいお便利機能

これから紹介する機能、はもふもふちゃんが「あら便利！むかしよりも進化してるわ！」と思ったけど、そんなに推し推しされていない機能です。

==== Dev Toolsの入力補完

「GoならわかるElasticsearch」の章ではコンソール上で直接Elasticsearchにクエリを発行していました。
しかし、KibanaのGUIには@<code>{Dev Tools}という画面があります。これがすんばらしいのです。

なにがすんばらしいのか？それは、クエリを入力する途中で入力補完が出てくるというところです。

例えば、今Elasticsearchに存在するindexを出したいなーと思ったとします。

コンソール上でクエリを発行するのであれば、次のように手で記載しますよね。

#@# keigodasuに合わせる

でも、Kibanaの@<code>{Dev Tools}で同じように記載しようとすると…？

#@# キャプチャを貼る

あら！AtomやVSCodeのように予測が出てきました。

三角を押すと、そのままElasticsearchにクエリを発行できます。jsonにはシンタックスハイライトが適用されているので、可読性も高いです。

作業用コンソールをいくつも立ち上げておくのは事故の元、と言いますが、Elasticsearchに限って言えば、@<code>{Dev Tools}を利用することで作業用ウィンドウを1つ節約できます。
みなさんも使ってみてはいかがでしょうか。

#@# クエリは英語表記に統一するか？

#@# Re:VIEWって章参照できるはずだからやり方みてみよう

==== Chart系が一括で切り替えできる
==== Discoverの検索窓にQueryのsyntax例が入っている

いいか、細やかな気遣いが大事なんだぞ。わかるかな？
