import Link from "next/link"

export default function Home() {
    return (
        <>
            <h1 className="text-3xl font-bold underline">
                Hello world!
            </h1>
            <Link href="/about">About</Link>
            <Link href="/blog">Blog</Link>
            <Link href="/products">Products</Link>
            <Link href="/articles/breaking-news-123?lang=en">Read in English</Link>
            <Link href="/articles/breaking-news-123?lang=fr">Read in France</Link>
        </>
    )
}