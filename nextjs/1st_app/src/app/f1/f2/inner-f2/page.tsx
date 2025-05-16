import Link from "next/link"

export default function InnerF2() {
    return (
        <div>
            <h1>
                Inner F2 page <Link href={"/f5"}>F5</Link>
            </h1>
        </div>
    )
}